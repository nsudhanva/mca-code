sqrt(729)
b = 1947.0
as.character(b)
v = 1:6
class(v)
v = c(1, '10', T)
class(v)
v = as.character(c(1:26))
v[1] = "a"
v
names = c("VijayBaba", "ShreedharTwat", "PrateekPleb")
names
length(names)
names[1]
names[1:2]
names[2:3]
names[c(2,3)]
sort(names)
sort(names, decreasing=TRUE)
x = rep("a", 2)
y = seq(1:11)
z = c(x, y)
z

num = c(1, 2, NA, 4)
na.omit(num)

ran = 1:100
ran
samp = sample(ran, 50)
samp2 = sample(ran, 40, replace=TRUE)
class(samp)
a = LETTERS[1:26]
a
a = 1:999999999
summary(samp2)
