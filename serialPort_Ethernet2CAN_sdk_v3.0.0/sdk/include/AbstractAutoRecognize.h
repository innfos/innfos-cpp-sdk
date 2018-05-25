﻿#ifndef ABSTRACTAUTORECONGNIZE_H
#define ABSTRACTAUTORECONGNIZE_H
#include <map>

class AbstractAutoRecognize
{
public:
    static AbstractAutoRecognize * getInstance(int nType);
    explicit AbstractAutoRecognize();
    virtual ~AbstractAutoRecognize();
    virtual void startRecognize()=0;
    virtual void waitTimeout()=0;
public:
    void addMototInfo(uint8_t nDeviceId,uint32_t nDeviceMac);
    std::map<uint8_t,uint32_t> getMotorsInfo()const{return m_motorsInfo;}
protected:
    std::map<uint8_t,uint32_t> m_motorsInfo;
private:
    bool m_bUniqueId;
};

#endif // ABSTRACTAUTORECONGNIZE_H
