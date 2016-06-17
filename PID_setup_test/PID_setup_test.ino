
//m1PID
#define Kp_m1 //VALUE
#define Ki_m1 //VALUE
#define Kd_m1 //VALUE
#define m1PID_direction //VALUE
#define m1PID_MIN //VALUE
#define m1PID_MAX //VALUE

//m2PID
#define Kp_m2 //VALUE
#define Ki_m2 //VALUE
#define Kd_m2 //VALUE
#define m2PID_direction //VALUE
#define m2PID_MIN //VALUE
#define m2PID_MAX //VALUE

//pitchPID
#define Kp_pitch //VALUE
#define Ki_pitch //VALUE
#define Kd_pitch //VALUE
#define pitchPID_direction //VALUE
#define pitchPID_MIN //VALUE
#define pitchPID_MAX //VALUE

//PID variables
double pid_m1_in, pid_m1_out, pid_m1_setpoint = 0;
double pid_m2_in, pid_m2_out, pid_m2_setpoint = 0;
double pid_pitch_in, pid_pitch_out, pid_pitch_setpoint = 0;

PID m1PID(&pid_m1_in, &pid_m1_out, &pid_m1_setpoint, Kp_m1, Ki_m1, Kd_m1, m1PID_direction);
PID m2PID(&pid_m2_in, &pid_m2_out, &pid_m2_setpoint, Kp_m2, Ki_m2, Kd_m2, m2PID_direction);
PID pitchPID(&pid_pitch_in, &pid_pitch_out, &pid_pitch_setpoint, Kp_pitch, Ki_pitch, Kd_pitch, pitchPID_direction);

void pid_initialize () {

  m1PID.SetMode(AUTOMATIC);
  m1PID.SetOutputLimits(m1PID_MIN, m1PID_MAX);
  m1PID.SetSampleTime(100);
  
  m2PID.SetMode(AUTOMATIC);
  m2PID.SetOutputLimits(m2PID_MIN, m2PID_MAX);
  m2PID.SetSampleTime(100);
  
  pitchPID.SetMode(AUTOMATIC);
  pitchPID.SetOutputLimits(pitchPID_MIN, pitchPID_MAX);
  pitchPID.SetSampleTime(100);
}

void pid_compute() {
  m1PID.Compute();
  m2PID.Compute();
  pitchPID.Compute();
}

