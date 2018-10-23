bull_riders = read.csv('BullRiders.csv')

cor(bull_riders$CupPoints12, bull_riders$Earnings12)
plot(bull_riders$CupPoints12, bull_riders$Earnings12)
abline(lm(bull_riders$Earnings12~bull_riders$CupPoints12), col="red")

max_value = max(bull_riders_12$Earnings12)
bull_riders_12_no_outliers =  bull_riders[!(bull_riders$Earnings12 == max_value),]
cor(bull_riders_12_no_outliers$CupPoints12, bull_riders_12_no_outliers$Earnings12)
cor(bull_riders_12_no_outliers$RidePer12, bull_riders_12_no_outliers$Earnings12)

cor(bull_riders$RidePer12, bull_riders$Earnings12)
plot(bull_riders$RidePer12, bull_riders$Earnings12)
abline(lm(bull_riders$Earnings12~bull_riders$RidePer12), col="red")

cor(bull_riders$CupPoints13, bull_riders$Earnings13)
plot(bull_riders$CupPoints13, bull_riders$Earnings13)
abline(lm(bull_riders$Earnings13~bull_riders$CupPoints13), col="red")

cor(bull_riders$RidePer14, bull_riders$Earnings14)
plot(bull_riders$CupPoints14, bull_riders$Earnings14)
abline(lm(bull_riders$Earnings14~bull_riders$CupPoints14), col="red")
