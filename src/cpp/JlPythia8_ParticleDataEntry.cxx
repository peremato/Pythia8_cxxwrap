// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::ParticleDataEntry> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::ParticleDataEntry> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::ParticleDataEntry
// signature to use in the veto file: Pythia8::ParticleDataEntry
struct JlPythia8_ParticleDataEntry: public Wrapper {

  JlPythia8_ParticleDataEntry(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::ParticleDataEntry (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ParticleData.h:125:7
    jlcxx::TypeWrapper<Pythia8::ParticleDataEntry>  t = jlModule.add_type<Pythia8::ParticleDataEntry>("Pythia8!ParticleDataEntry");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ParticleDataEntry>>(new jlcxx::TypeWrapper<Pythia8::ParticleDataEntry>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ParticleDataEntry>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_ParticleDataEntry(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_ParticleDataEntry(module));
}
