import pandas as pd

# Take the data and import it into an initial string. Considering the code was given to us in this format, I just copied the line from the assessment into here.
data = 'Airline Code;DelayTimes;FlightCodes;To_From\nAir Canada (!);[21, 40];20015.0;WAterLoo_NEWYork\n<Air France> (12);[];;Montreal_TORONTO\n(Porter Airways. );[60, 22, 87];20035.0;CALgary_Ottawa\n12. Air France;[78, 66];;Ottawa_VANcouvER\n""".\\.Lufthansa.\\.""";[12, 33];20055.0;london_MONTreal\n'

# Since the data is given to us in a string, we have to manipulate it a bit to put it into a DataFrame.
# A simpler approach would involve using StringIO and importing it into the DataFrame as a CSV, but this approach doesn't need to import another library.

# Rows are split by '\n'.
lines = data.strip().split('\n')

# Columns are delimited by ';' and headers are the first row.
headers = lines[0].split(';')

# Iterate through every row and add them to our list of rows that are not headers.
rows = []
for line in lines[1:]:
    row = line.split(';')
    rows.append(row)

# Import rows and headers to our pandas DataFrame, df.
df = pd.DataFrame(rows, columns=headers)

# Transformation 1
# Since some flight codes are null values, we need to replace them with None to use interpolation.
df['FlightCodes'] = df['FlightCodes'].replace('', None)
# Now that all flight codes are strings, we can make them numeric.
df['FlightCodes'] = pd.to_numeric(df['FlightCodes'])
# Then, we can apply interpolation to 'fill in' the empty values. This is straightforward, as we can just use linear interpolation. The column is specified as integers here as they were previously floats.
df['FlightCodes'] = df['FlightCodes'].interpolate(method='linear').astype(int)

# Transformation #2 
# Split the 'To' and 'From' columns into two separate columns with the delimiter '_'.
df[['To', 'From']] = df['To_From'].str.split('_', expand=True)
# I am assuming 'Capital Case' refers to all uppercase here, so I just made both of the columns uppercase. Would ask for clarification on this.
df['To'] = df['To'].str.upper()
df['From'] = df['From'].str.upper()
# Remove the original 'To_From' column.
df.drop('To_From', axis=1, inplace=True)

# Transformation #3
# This can actually be done in one line since it is pretty simple, but there is some clarification needed in the prompt.
# Particularly, it doesn't state whether we need to remove numbers, since those are not technically punctuation.
# I went ahead and removed them, but if this was not the correct implementation then I have the other implementation below this line of code as well.
# Approach 1: Remove punctuation and numbers. We take each 'value' in the Airline Code column, which are all strings, and treat them as regular expressions. In these expressions, we remove anything that isn't alphabetic and remove whitespace using the '\s' expression.
df['Airline Code'] = df['Airline Code'].str.replace(r'[^a-zA-Z\s]', '', regex=True)
# Approach 2: Remove punctuation only. We take each 'value' in the Airline Code column, which are all strings, and treat them as regular expressions. In these expressions, we remove any non-word characters with '\w', any whitespace characters '\s', and keep the alphanumeric characters.
# df['Airline Code'] = df['Airline Code'].str.replace(r'[^\w\s]', '', regex=True)

# To check the output, I simply output the DataFrame using a print statement.
print(df)
