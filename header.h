void init_portf(void);
void init_portk(void);
void time_delay(long);

// Initilization of port_f as OUTPUT PORT for LED
void init_portf();
{
  volatile char *dirf;
  volatile char *outf;
  dirf=0x30;
  *dirf=0xff;
  outf=0x31;
}

// // Initilization of port_k as INPUT PORT for switch
void init_portk();
{
  volatile char *dirk;
  volatile char *ink;
  dirk=0x107;
  *dirk=0x00;
  ink=0x106;
}

// time delay function
void timedelay()
{
  volatile long i;
  for(i=0; i<250000; i++);
}

void set_1()
{
  volatile char x, out;
  x=*intk;
  if()

}



