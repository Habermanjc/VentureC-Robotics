
task main()
{

motor[port2] = -120;
motor[port3] = 127;
wait1Msec(1200);

motor[port2] = -90;
motor[port3] = -90;
wait1Msec(600);

motor[port2] = -127;
motor[port3] = 127;
wait1Msec(1400);

motor[port2] = -90;
motor[port3] = -90;
wait1Msec(800);

motor[port2] = -127;
motor[port3] = 127;
wait1Msec(1500);

motor[port2] = -90;
motor[port3] = -90;
wait1Msec(800);



}
