# Import dataset

dataframe = read.csv('BikeData.csv')

ages = dataframe$age

hist(ages, xlab = "Age Distribution", col = "blue", border = "black")
