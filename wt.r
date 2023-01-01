 Load libraries
library(wordcloud)
library(RColorBrewer)

# Text data for word cloud
words ＜- c("R ", "Python", "Data Science", "Machine Learning", "Data",
          "Daft", "Visualization", "Plot", "Tutorial", "Keywords", "Fun",
          "Color", "ggplot2", "YouTube", "Channel", "Subscribe", "Text",
          "NLP", "Deep Learning", "Predictive Modeling", "Analytics",
          "Learn", "Video", "Teach", "Help", "Interesting", "Word", "Cloud",
          "Histogram", "Scatterplot", "Bar Plot", "Density", "Pie Chart")

# Word frequencies
freqs ＜- c(100, 70, 90, 50, 80, 20, 30, 30, 20, 
           10, 70, 40, 20, 15, 15, 25, 5, 5,
           15, 25, 35, 50, 30, 20, 30, 50, 
           20, 20, 15, 25, 25, 5, 10)

set.seed(3)

wordcloud(words = words,
          freq = freqs,
          max.words = 100,
          colors = brewer.pal(8,"Dark2"))
