# IUS-CS103

This week we implemented very basic and primitive HASH TABLE.

- On the first version, Our program is capable of Add Remove and Display the elements.
    * As it is noticeable, Your **DATA** is an __char array__. The program just converts every letter of the array to integer and sum them. This number represent the data. Through the modulo operation, the index of the table, which the data is stored, is determined. Thus, we can add the DATA to table or search to remove it.

- On the second version, Our program improved it self to resize the table, in case it is crowded.
    * This time the data are just integer values. If the TABLE occupied by the data more than 70%, The program would resize the table.
