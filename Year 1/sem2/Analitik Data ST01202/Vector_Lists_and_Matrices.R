#Data Structure
#Vector, list, matrices

#Vector
a<- 4:10
b <- 2.2 : 6.2
print(a)
print(b)

print(seq(1,5,  by = 0.3))

#Access Element in Vector
animals <- c("Tupai", "Angsa", "Cicak", "Kumbang", "Kucing", "Kuda")
#Direct Access
e1 <- animals[c(1,2,4)]
print(e1)

#Access by logical Index
e2 <- animals[c(FALSE, TRUE, TRUE, TRUE, FALSE, TRUE)]
print(e2)

#By negative index
e3 <- animals[c(-2, -4)]
print(e3)

#======================================#
p <- c(9, 6, 3, 12, 8)
q <- c(1,2) #q c(1,2,1,2,1)

#Addition (same goes to subtraction)
addition <- p + q
print(addition)

#sorting
sortP <- sort(p)
print(sortP)

revSortP <- sort(p, decreasing = TRUE)
print(revSortP)


list_name <- list(matrix(c(1, 2, 3, 4, 5, 6, 7, 8, 9), nrow =3), c("Mon", "Tue", "Wed"))
#AddTitle
names(list_name) <- c("Matrix", "Half_Week")
print(list_name)

#List
list_random <- list("Blue", "Yellow", "Pink", c(12,13,14), TRUE, 13.2)
print(list_random)
print(list_random[3])

print(list_name[2])

#AddElement
list_name[3] <- list(c("Mother", "Father"))
print(list_name)
names(list_name) <- c("Matrix", "Half_Week", "Parents")
print(list_name)

#Delete
list_name[1] <- NULL
print(list_name)

#Merging List
ListA <- list("Saya", "Ada")
ListB <- list("Buku", "Cerita")
merge.list <- c(ListA, ListB)
print(merge.list)

#Convert list to vector
CvA <- unlist(ListA)
CvB <- unlist(ListB)
print(ListA)
print(ListB)
print(CvA)
print(CvB)
CvC <- unlist(merge.list)
print(CvC)

#Matrx
#syntax = matrix(data, nrow, ncol, byrow, dimnames)

#define row and column name
rn <- c("R1", "R2", "R3", "R4")
cn <- c("C1", "C2", "C3")

#Create matrix
A <- matrix(c(1:12), nrow = 4, byrow = FALSE, dimnames = list(rn,cn))
print(A)

#access 2nd row, 3rd col
print(A[2,3])

#Access 3rd col
print(A[ ,3])

#Access 2nd row
print(A[2, ])
