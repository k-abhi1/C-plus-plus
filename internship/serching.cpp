1 liner 
2 binary serch

liner serch thisn is the simplest tequnic serchin is srtaing for farst to last element one by5 one un til serching element found 
or list is end

binary serch this is the most popular serching algoritham which is used to serch a perticular element in a sorted list
this algoritham works on the principle of divide and conqure
for this algoritham to work properly the list must be sorted
in this algoritham we first find the mid element of the list and then compare it with the element to be serched
if the element to be serched is greater than the mid element then we serch the element in the right sub list of the mid element
otherwise we serch the element in the left sub list of the mid element

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of the array";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter the element to be serched";
//     cin>>key;

//     int s=0;
//     int e=n;
//     int mid;
//     while(s<=e)
//     {
//         mid=(s+e)/2;
//         if(arr[mid]==key)
//         {
//             cout<<"Element found at index"<<mid;
//             break;
//         }
//         else if(arr[mid]>key)
//         {
//             e=mid-1;
//         }
//         else
//         {
//             s=mid+1;
//         }
//     }
//     if(s>e)
//     {
//         cout<<"Element not found";
//     }
//     return 0;
// }
