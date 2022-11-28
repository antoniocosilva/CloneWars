#ifndef CALOINFO_H
#define CALOINFO_H

#include <cstddef>  // for size_t
#include <iostream>
#include <set>
#include <TObject.h>

#include <phool/PHObject.h>
#include <TClonesArray.h>

class CaloInfo : public TObject
{
 public:
  CaloInfo();
  CaloInfo(const CaloInfo &ci);
  ~CaloInfo() override;

  void setTime(float t) { _time = t; }
  float getTime() { return _time; }
  void setAmplitude(float amp) { _amplitude = amp; }
  float getAmplitude() { return _amplitude; }
  void setVTime(float t, int p) { _vtime[p] = t; }
  float getVTime(int p) { return _vtime[p]; }


protected:
  float _time;
  float _amplitude;
  std::vector<float> _vtime = {0., 0., 0., 0., 0.};


  ClassDefOverride(CaloInfo, 1);
};

#endif
