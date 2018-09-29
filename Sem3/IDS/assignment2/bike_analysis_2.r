# Import dataset

dataframe = read.csv('BikeData.csv')

# Get all the daily cyclists
daily_cyclists = subset(dataframe, cyc_freq == 'Daily')

# Count the number of daily cyclists
nrow(daily_cyclists)
# 47


# Count the number of male and female daily cyclists
table(daily_cyclists$gender)
# M: 38
# F: 9

# Mean age of daily cyclists
colMeans(daily_cyclists['age'])
# Age: 33.65

# Mean age of daily female cyclists
colMeans(subset(daily_cyclists, gender == 'F')['age'])
         
# Mean age of daily male cyclists
colMeans(subset(daily_cyclists, gender == 'M')['age'])
