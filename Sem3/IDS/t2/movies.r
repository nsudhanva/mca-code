movies = read.csv('movies.csv')
summary(movies)

movies['profit'] = movies$gross - movies$budget

plot(movies$profit, movies$rating)
cor(movies$profit, movies$rating)

abline(lm(movies$profit~movies$rating))
  
plot(movies$profit, movies$cast_facebook_likes)
cor(movies$profit, movies$cast_facebook_likes)

plot(movies$profit, movies$budget)
cor(movies$profit, movies$budget)

plot(movies$profit, movies$votes)
cor(movies$profit, movies$votes)

plot(movies$profit, movies$reviews)
cor(movies$profit, movies$reviews)

movies_subset = movies[((movies$genre == 'Comedy' | movies$genre == 'Crime') & (movies$year == 2004 | movies$year == 2005)),]

table(movies$genre, movies$year)
prop.table(table(movies$genre, movies$year))
