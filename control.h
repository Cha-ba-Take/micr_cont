extern pid_t pid;
extern int rk;

void attackLeft(void);
void attackRight(void);
void moveForward(void);
void moveLeft(void);
void moveRight(void);
void moveBack(void);


void init(void);
void setTime(void);
void setMorning(void);
void setSurvival(void);
void setCreative(void);
void cameraPos(void);

void cameraDown(void);
void cameraLeft(void);
void cameraRight(void);
void cameraUp(void);
void pushKey(char* key);

int kbhit(void);
int isInterrupt(void);
void killPython(void);

int detectZombie(void);
void exePython(void);
