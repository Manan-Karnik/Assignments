#1
x <- c(1, 2, 3, 2, 4, 5, 4, 6, 7, 8, 9)
freq <- data.frame(table(x))
relFreq <- data.frame(prop.table(table(x)))
relFreq$Freq <- NULL
Cumulative_Freq <- cumsum(table(x))
z<-cbind(merge(freq,relFreq),Cumulative_Freq)
z$Cumulative_Relative_Freq <- z$Cumulative_Freq / sum(z$Freq)
print(z)
a = z$Freq
hist(a)
colors = c("red", "yellow", "green", "violet", "orange", "blue", "pink", "cyan")
hist(a, col = colors)

#2
x <- c(23, 20, 16, 18, 30, 22, 26, 15, 05, 18,
       14, 17, 11, 37, 21, 06, 10, 20, 22, 25,
       19, 19, 19, 20, 12, 23, 24, 17, 18, 16,
       27, 16, 28, 26, 15, 29, 19, 35, 20, 17,
       12, 30, 21, 22, 20, 15, 18, 16, 23, 24,
       15, 24, 28, 19, 24, 22, 17, 19, 08, 18,
       17, 18, 23, 21, 25, 19, 20, 22, 21, 21,
       16, 20, 19, 11, 23, 17, 23, 13, 17, 26,
       26, 14, 15, 16, 27, 18, 21, 24, 33, 20,
       21, 27, 18, 22, 17, 20, 14, 21, 22, 19)
freq <- data.frame(table(x))
relFreq <- data.frame(prop.table(table(x)))
relFreq$Freq <- NULL
Cumulative_Freq <- cumsum(table(x))
z<-cbind(merge(freq,relFreq),Cumulative_Freq)
z$Cumulative_Relative_Freq <- z$Cumulative_Freq / sum(z$Freq)
print(z)
a = z$Freq
hist(a)
colors = c("red", "yellow", "green", "violet", "orange", "blue", "pink", "cyan")
hist(a, col = colors)

#3
x <- c(13.8, 14.1, 14.7, 15.2, 15.6, 14.9, 16.7, 19.2, 14.9, 14.9,
       14.9, 15.2, 15.9, 15.2, 14.8, 14.8, 19.1, 14.6, 18.0, 14.9,
       14.2, 14.1, 15.3, 15.5, 18.0, 17.2, 17.2, 14.1, 14.5, 18.0,
       14.4, 14.2, 14.6, 14.2, 14.8)
freq <- data.frame(table(x))
relFreq <- data.frame(prop.table(table(x)))
relFreq$Freq <- NULL
Cumulative_Freq <- cumsum(table(x))
z<-cbind(merge(freq,relFreq),Cumulative_Freq)
z$Cumulative_Relative_Freq <- z$Cumulative_Freq / sum(z$Freq)
print(z)
a = z$Freq
hist(a)
colors = c("red", "yellow", "green", "violet", "orange", "blue", "pink", "cyan")
hist(a, col = colors)
