// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Sigma3Process> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Sigma3Process> : std::false_type { };
template<> struct SuperType<Pythia8::Sigma3Process> { typedef Pythia8::SigmaProcess type; };
}

// Class generating the wrapper for type Pythia8::Sigma3Process
// signature to use in the veto file: Pythia8::Sigma3Process
struct JlPythia8_Sigma3Process: public Wrapper {

  JlPythia8_Sigma3Process(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Sigma3Process (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:545:7
    jlcxx::TypeWrapper<Pythia8::Sigma3Process>  t = jlModule.add_type<Pythia8::Sigma3Process>("Pythia8!Sigma3Process",
      jlcxx::julia_base_type<Pythia8::SigmaProcess>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Sigma3Process>>(new jlcxx::TypeWrapper<Pythia8::Sigma3Process>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;

    DEBUG_MSG("Adding wrapper for int Pythia8::Sigma3Process::nFinal() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::Sigma3Process::nFinal()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:553:18
    t.method("nFinal", static_cast<int (Pythia8::Sigma3Process::*)()  const>(&Pythia8::Sigma3Process::nFinal));

    DEBUG_MSG("Adding wrapper for void Pythia8::Sigma3Process::set3Kin(double, double, double, Pythia8::Vec4, Pythia8::Vec4, Pythia8::Vec4, double, double, double, double, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Sigma3Process::set3Kin(double, double, double, Pythia8::Vec4, Pythia8::Vec4, Pythia8::Vec4, double, double, double, double, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:556:18
    t.method("set3Kin", static_cast<void (Pythia8::Sigma3Process::*)(double, double, double, Pythia8::Vec4, Pythia8::Vec4, Pythia8::Vec4, double, double, double, double, double, double) >(&Pythia8::Sigma3Process::set3Kin));

    DEBUG_MSG("Adding wrapper for double Pythia8::Sigma3Process::sigmaHat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Sigma3Process::sigmaHat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:563:18
    t.method("sigmaHat", static_cast<double (Pythia8::Sigma3Process::*)() >(&Pythia8::Sigma3Process::sigmaHat));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Sigma3Process>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Sigma3Process(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Sigma3Process(module));
}
