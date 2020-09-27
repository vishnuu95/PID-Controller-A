#pragma once

namespace tdd {
    class PIDController{
        private:
            double kp_, ki_, kd_;
            double target_velocity;
            double current_velocity;
            double error_threshold;
        public:
            //Constructer
            PIDController(double kp, double ki, double kd) {
                kp_ = kp;
                ki_ = ki;
                kd_ = kd;
            }
            
            //Destructor 
            ~PIDController();

            //Settes

            void setKp(double);
            void setKi(double);
            void setKd(double);
            double getKp();
            double getKi();
            double getKd();

            double computeError();
            double computeVelocity();
                    
    }
}; //namespace