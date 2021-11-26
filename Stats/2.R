Input = (
  "Stream                    Fish
  Mill_creek_1                76
  Mill_creek_2               102
  North_branch_rock_creek_1   12
  North_branch_rock_creek_2   39
  Rock_creek_1                55
  Rock_creek_2                93
  Rock_creek_3                98
  Rock_creek_4                53
  Turkey_branch              102
  "
)

Data = read.table(textConnection(Input), header = TRUE)
mean(Data$ Fish)

median(Data$ Fish)

mode(Data$ Fish)

hist(Data$ Fish,
     col = "red",
     main = "Stream Survey",
     xlab = "Fish count")

sd(Data$ Fish)

summary(Data$ Fish)
