void WriteAllLeds(char *pBase, int value) {
    int bit_val = 0;
    cout<<"enter value between 0 and 255"<<endl;
    cin>>bit_val;
    Write1Led(pBase, 0,value%2);
    Write1Led(pBase, 1,(value/2)%2);
    Write1Led(pBase, 2, (value/4)%2);
    Write1Led(pBase, 3, (value/8)%2);
    Write1Led(pBase, 4, (value/16)%2);
    Write1Led(pBase, 5, (value/32)%2);
    Write1Led(pBase, 6, (value/64)%2);
    Write1Led(pBase, 7, (value/128)%2);
    cout<<bit_val<<"is written in binary on LED!"<<endl;


}