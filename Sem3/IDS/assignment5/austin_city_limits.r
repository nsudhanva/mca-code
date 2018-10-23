austin_city_limits = read.csv('AustinCityLimits.csv')

table(austin_city_limits$Gender)
table(austin_city_limits$Season)
table(austin_city_limits$Genre)
table(austin_city_limits$Grammy)

table(austin_city_limits$Grammy, austin_city_limits$Genre, austin_city_limits$Gender)

cor(austin_city_limits$CupPoints12, austin_city_limits$Earnings12)
plot(austin_city_limits$CupPoints12, austin_city_limits$Earnings12)
abline(lm(austin_city_limits$Earnings12~austin_city_limits$CupPoints12), col="red")

barplot(table(austin_city_limits$Grammy, austin_city_limits$Genre),
        main="Grammy Count",
        xlab="Grammies",
        ylab="Count",
        border="red",
        col= c("red","green"))

prop.table(table(austin_city_limits$Grammy, austin_city_limits$Genre))

prop.table(table(austin_city_limits$Grammy, austin_city_limits$Genre, austin_city_limits$Gender))
