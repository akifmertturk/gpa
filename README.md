# gpa
![c](https://img.shields.io/badge/-C%20Programming%20Language-blue) ![CLI](https://img.shields.io/badge/-CLI-yellowgreen)  
cGPA Calculator for university students. This calculator is created by a ODTÜ|METU student, me.   
So, the system used in this project is the form of `AA/BA/BB/CB/CC/DC/DD/FD/FF` as used in ODTÜ.   
`AA` is counted as **4** points, `BB` is counted as **3** points, `BA` is counted as **3.5** points, till the `FF` which is counted as **0** point.
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
**Important** : Please type `FF` instead of `NA` as input.
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
*By Miraç Akif Merttürk*
************************
*Lütfen inputları şu   *
*şekilde giriniz :     *
*CourseName :          *
*kredi_sayısı harfNotu,*
* ':' ve ',' unutmayın *
*en sona ise ',' yerine*
* '.' (nokta) koyunuz  *
***********************
CENG140 : 4 AA,
CENG384 : 3 DC,
MATH119 : 5 BB.
*                      *
*CENG140 : AA - 4 kredi*
*CENG384 : DC - 3 kredi*
*MATH119 : BB - 5 kredi*

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
