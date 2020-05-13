//use g++ name name.cpp to commpile 

/*// Doesnt work  
int printf(const char *format,...); 
  
int main() 
{ 
    printf("Hello WOrld"); 
    return 0; 
} 
*/
// Save file as .cpp and use C++ compiler to compile it 
extern "C"
{ 
	int printf(const char *format,...); 
} 

int main() 
{ 
	printf("\nHello World\n"); 
	return 0; 
} 
