
task main()
{

motor[port2] = -127;
motor[port3] = 75;
wait1Msec(1900);

motor[port2] = -127;
motor[port3] = 0;
wait1Msec(1840);

motor[port2] = 0;
motor[port3] = 127;
wait1Msec (1000);

}
