 #include<Stdio.h>//preprocessor directive to include standard input or output header file
int main()
{
    int arr[50],i,n,x,flag=0,first,last,mid;//Declare the variable
 
    printf("Enter size of array:");//Enter enter the number
    scanf("%d",&n);//The value of n is taken by user
    printf("\nEnter array element(ascending order)\n");//print ascending order 
 
    for(i=0;i<n;++i)//Take for loop 
        scanf("%d",&arr[i]);//loop start from 0 and n is taken by user
 
    printf("\nEnter the element to search:");//Enter the element to search
    scanf("%d",&x);
 
    first=0;//declare first and its value
    last=n-1;//last is taken n-1
   //Take while loop
    while(first<=last)
    {
        mid=(first+last)/2;
     //Take if else statment
        if(x==arr[mid]){
            flag=1;
            break;//break is used if the condtion is true it jump to return statement
        }
        else
            if(x>arr[mid])
                first=mid+1;
            else
                last=mid-1;
    }
 
    if(flag==1)
        printf("\nElement found at position %d",mid+1);
    else
        printf("\nElement not found");
 
    return 0;//return statment
}