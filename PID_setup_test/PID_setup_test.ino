
#define Kp //VALUE
#define Ki //VALUE
#define Kd //VALUE


//PID variables
double pid_m1_in, pid_m1_out, pid_m1_setpoint = 0;
double pid_m2_in, pid_m2_out, pid_m2_setpoint = 0;
double pid_pitch_in, pid_pitch_out, pid_pitch_setpoint = 0;

PID m1PID(&pid_m1_in,&pid_m1_out,&pid_m1_setpoint, Kp, Ki, Kd, DIRECT);
PID m2PID(&pid_m2_in,&pid_m2_out,&pid_m2_setpoint, Kp, Ki, Kd, DIRECT);
PID pitchPID(&pid_pitch_in, pid_pitch_out, pid_pitch_setpoint, Kp, Ki, Kd, DIRECT);


SetMode(AUTOMATIC)


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
