// Using Binary Search Finding Square root of number
int floorsqrt(int n)
{
//   if (n == 0 || n == 1) {
//     return n;
//   }
    int low=1;
    int high=n;
    int ans=1;
    while(low<=high){
        long long mid=(low+high)/2;
        long long val=(mid*mid);
        if(val<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
