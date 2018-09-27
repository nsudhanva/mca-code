# #		Question	Answer

dataframe = read.csv('BikeData.csv')

# 1.		Examining the dataset	
# a)	What is the age of the 7th rider in the dataset?	

dataframe[7,]['age']

# b)	How many of the first 10 riders in the dataset ride daily?	

nrow(subset(dataframe[1:10,], cyc_freq == 'Daily'))

# c)	What is the speed of the first female who cycles less than one time per month (in miles/hour)?	

subset(dataframe, gender == 'F' & cyc_freq == 'Less than once a month')[1,]['speed']

# 2.	
# a)	What type of variable is student?	

sapply(dataframe['student'], class)

#   b)	What type of variable is cyc_freq?	

sapply(dataframe['cyc_freq'], class)

#   c)	What type of variable is distance?	

sapply(dataframe['distance'], class)

#   3.		

table(dataframe$student)	

# a)	What is the name of the dataframe?	

# bike

#   b)	What is the name of the variable?	

# student

# 4.  student <- bike[bike$student==1,]

#   What is the role of the comma?
#   [1] It tells R to include all the variables (columns) for the riders that are students
#   [2] It tells R to include all the students (rows), beginning with the first one	- answer

#   What does "student" refer to in this line of code?:
#   table(student$cyc_freq)
#   [1] the original variable called "student"
#   [2] the new dataframe called "student" - answer	

# 5.	Research Question: 
# How many of the cyclists were students, how often did they ride, and what was the average distance they rode? 
# Write R code to conduct analysis	

# a)	Find the number of students in the dataset.	
nrow(dataframe[dataframe$student==1,])

# b)	Pull out the student data into a separate dataframe for analysis.	
students = dataframe[dataframe$student==1,]
students

# c)	Make a table to find how often the students ride.	
table(students['cyc_freq'])

# d)	Find the average distance ridden	
colMeans(students['distance'])

# 6.		Find answers for the following from the code you have executed	

# a)	How many students are in the dataset?	
# 14
# How many variables are in the new data frame "student"? 	
# 8

# b)	We want to know how often the students ride. What is the most frequently observed response?	
# Daily

# How is the vector "distance" described in the workspace?	
describe(students['distance'])

#   c)	How far do students ride on average?	
#   7.		Conclusion	
# We examined data on ------- student riders. Most of the student riders ( a total of ----- out of ------) rode their bikes -------.  On average, the students rode about -------miles on each trip.	
# We examined data on 14 student riders. Most of the student riders (a total of 8 out of 14) rode their bikes Daily.  On average, the students rode about 6.25 miles on each trip.