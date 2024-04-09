if((arr[pivot]<target)&&(arr[size]>target)){
        indexOfkey = binarySearch(arr,target,pivot,size);
        cout<<"herer";
        cout<<indexOfkey<<endl;
    }else{
        indexOfkey = binarySearch(arr,target,0,pivot-1);
        cout<<"therer";
        cout<<indexOfkey<<endl;
    }
    int index=binarySearch(arr,key,0,arr.size());
    