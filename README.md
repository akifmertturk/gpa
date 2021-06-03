# gpa
cGPA Calculator
# How to use  
First, compile the gpa.c file as below;  
`gcc gpa.c -o gpa`  
then to see how to use it, run it;  

```
./gpa  

************************
*Lütfen inputları şu   *
*şekilde giriniz :     *
*CourseName :          *
*kredi_sayısı harfNotu,*
* ':' ve ',' unutmayın *
*en sona ise ',' yerine*
* '.' (nokta) koyunuz  *
************************
```  
## Example Usage  
**Input** >>  
```
CENG140 : 4 AA,
CENG384 : 3 DC,
MATH119 : 5 BB.
```  
**Output** >>  
```
************************
*                      *
*     cGPA = 2.96 !    *
*                      *
******* AŞMIŞSIN *******

           ~~           

```  
If you want to use a file as inputand save it for the later usage, then create a `.txt` file, save the input values in that file,  
and then type the following command;  
`./gpa < input-file-name.txt`  
That's it!
