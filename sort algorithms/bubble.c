#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int N=10;
int tab [ 10 ] ;
int main  ()
{
 clock_t t1 , t2 ;

 int i=N-1;
 int j ;
 int c ;
 bool trie= false ;
 t1=clock () ;
 while ( i >0 & ! trie )
 { trie=true ;
 for ( j=0; j<i ; j++)
  {
 if ( tab [ j ]>tab [ j +1])
 {
 c=tab [ j ] ;
  tab [ j +1]= tab [ j ] ;
 tab [ j ]= c ;
 trie= false ;
 }
 }
 i --;
 }
 t2=clock ( ) ;
 double delta ;
 delta = ( double ) ( t2-t1 ) /CLOCKS_PER_SEC ;
 printf ( "%f " , delta ) ;
return 0;
}