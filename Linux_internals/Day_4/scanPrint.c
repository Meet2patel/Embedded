int main()
{
    char buf[30];
    int n;
    write(1,"This is written to fd number 1\n",31);
    write(1,"This is written to fd number 2\n",31);
    write(1,"Enter the line of text\n",31);
    n=read(0,buf,80);
    write(1,"Following is the line i read\n",29);
    write(1,buf,n);

}