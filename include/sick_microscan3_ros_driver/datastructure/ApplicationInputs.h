#pragma once

#include <sick_microscan3_ros_driver/datastructure/DataTypes.h>

namespace sick {
namespace datastructure {

class ApplicationInputs
{
public:
  ApplicationInputs();

  std::vector<bool> getUnsafeInputsInputSourcesVector() const;
  void setUnsafeInputsInputSourcesVector(const std::vector<bool> &unsafe_inputs_input_sources_vector);

  std::vector<bool> getUnsafeInputsFlagsVector() const;
  void setUnsafeInputsFlagsVector(const std::vector<bool> &unsafe_inputs_flags_vector);

  std::vector<UINT16> getMonitoringCasevector() const;
  void setMonitoringCaseVector(const std::vector<UINT16> &monitoring_case_vector);

  std::vector<bool> getMonitoringCaseFlagsVector() const;
  void setMonitoringCaseFlagsVector(const std::vector<bool> &monitoring_case_flags_vector);

  INT16 getVelocity0() const;
  void setVelocity0(const INT16 &velocity_0);

  INT16 getVelocity1() const;
  void setVelocity1(const INT16 &velocity_1);

  bool getVelocity0Valid() const;
  void setVelocity0Valid(bool velocity_0_valid);

  bool getVelocity1Valid() const;
  void setVelocity1Valid(bool velocity_1_valid);

  bool getVelocity0TransmittedSafely() const;
  void setVelocity0TransmittedSafely(bool velocity_0_transmitted_safely);

  bool getVelocity1TransmittedSafely() const;
  void setVelocity1TransmittedSafely(bool velocity_1_transmitted_safely);

  INT8 getSleepModeInput() const;
  void setSleepModeInput(const INT8 &sleep_mode_input);

private:
  std::vector<bool> m_unsafe_inputs_input_sources_vector; //TODO in struct??? with next
  std::vector<bool> m_unsafe_inputs_flags_vector;

  std::vector<UINT16> m_monitoring_case_vector; //TODO 20 cases why 32 bit flags?
  std::vector<bool> m_monitoring_case_flags_vector;

  INT16 m_velocity_0;
  INT16 m_velocity_1;

  bool m_velocity_0_valid;
  bool m_velocity_1_valid;
  bool m_velocity_0_transmitted_safely;
  bool m_velocity_1_transmitted_safely;

  INT8 m_sleep_mode_input; //TODO enum8
};

}
}