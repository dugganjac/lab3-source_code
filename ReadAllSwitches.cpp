int  ReadAllSwitches(char *pBase) {
    int switch_val;
    //cout<<"enter switch value to read"<<endl;
   // cin>>switch_val;
   switch_val = switch_val + Read1Switch(pBase, 0);
   switch_val = switch_val + 2*Read1Switch(pBase, 1);
   switch_val = switch_val + 4*Read1Switch(pBase, 2);
    switch_val = switch_val + 8*Read1Switch(pBase, 3);
    switch_val = switch_val + 16*Read1Switch(pBase, 4);
    switch_val = switch_val + 32*Read1Switch(pBase, 5);
    switch_val = switch_val + 64*Read1Switch(pBase, 6);
    switch_val = switch_val + 128 *Read1Switch(pBase, 7);
    cout<<switch_val<< "represents the decimal equivalent of the value of the switches"<<endl;

}