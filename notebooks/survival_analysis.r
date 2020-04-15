library(survival)
library(ranger)
library(ggplot2)
library(dplyr)
library(ggfortify)

#------------
data(veteran)
head(veteran)

cox <- coxph(Surv(time, status) ~ trt + celltype + karno+ diagtime + age + prior , data = veteran)
cox_fit <- survfit(cox)
#plot(cox_fit, main = "cph model", xlab="Days")
autoplot(cox_fit)
df <- read.table("https://s3.amazonaws.com/assets.datacamp.com/blog_assets/test.txt", 
                 header = FALSE)