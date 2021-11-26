head(faithful)

duration = faithful$eruptions
range(duration)

breaks = seq(1.5, 5.5, by = 0.5)
breaks

duration.cut = cut(duration, breaks, right = FALSE)
duration.freq = table(duration.cut)
duration.freq
duration.cut

cbind(duration.freq)

duration.cumfreq = cumsum(duration.freq)
duration.cumfreq

cbind(duration.cumfreq)