
task main()
{

motor[port3] = 127;
motor[port2] = -127;
wait1Msec (1000);

motor[port3] = -127;
motor[port2] = -127;
wait1Msec (620);

motor[port3] = 127;
motor[port2] = -127;
wait1Msec (1450);

motor[port3] = 127;
motor[port2] = 127;
wait1Msec (600);

motor[port3] = 127;
motor[port2] = -127;
wait1Msec (730);

motor[port3] = 127;
motor[port2] = 127;
wait1Msec (600);


}
