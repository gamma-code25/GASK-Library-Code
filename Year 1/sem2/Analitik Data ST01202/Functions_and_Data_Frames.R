#26/3/2024

#Built in function
#seq()
print(seq(1,9))

#sum()
print(sum(25,50))

#mean()
print(mean(41:68))
#41 42 43 ... 68

#paste()
#to combine vectors after converting them to character
paste(1 , "sam", 2, "rob", 3, "max")
paste(1 , "sam", 2, "rob", 3, "max", sep = '-')
paste(1:3, c("sam","rob","max"), sep = ':',
      collapse = " and ")

#Dataframe
StudentID <- c(1:4)
StudentName <- c("Siti", "Ahmad", "Nurul", "Abdul")
StudentCourse <- c("MCG", "Geology", "Physic", "Chemistry")
maklumat <- data.frame(StudentID, StudentName, StudentCourse)
print(maklumat)

#head
print(head(maklumat, 2))

#tail
print(tail(maklumat, 1))

a <- c(3, 45, 6, 7, 9, 80)
print(a)

#min
print(min(a))

#max
print(max(a))

#range
print(range(a))

#which.min
print(which.min(a))

#which.max
print(which.max(a))

#user-defined function
Try1 <- function(){
  print("Hi")
}
  Try1()

Try2 <- function(letaknama){
  paste(letaknama, "Griffin")
}

Try2("Peter")
Try2("Lois")
Try2("Stewie")


Try3 <- function(m){
  total = m + 5
  print(total)
}

Try3(3)

Try4 <- function(x,y,z){
  sum = x*2 + y*2 + z*2
  print(sum)
}

Try4(3,6,9)

tambah = 0
Try5 <- function(n){
  for(i in 1:n){
    p <- i*2
    
    tambah = tambah + p
    
    print(tambah)
  }
}
Try5(3)