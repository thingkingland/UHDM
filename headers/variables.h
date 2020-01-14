/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   variables.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef VARIABLES_H
#define VARIABLES_H

namespace UHDM {

  class variables : public BaseClass {
  public:
    // Implicit constructor used to initialize all members,
    // comment: variables();
    ~variables()  {}
    
    bool get_vpiArrayMember() const { return vpiArrayMember_; }

    bool set_vpiArrayMember(bool data) { vpiArrayMember_ = data; return true;}

    std::string get_vpiName() const { return SymbolFactory::getSymbol(vpiName_); }

    bool set_vpiName(std::string data) { vpiName_ = SymbolFactory::make(data); return true; }

    std::string get_vpiFullName() const { return SymbolFactory::getSymbol(vpiFullName_); }

    bool set_vpiFullName(std::string data) { vpiFullName_ = SymbolFactory::make(data); return true; }

    bool get_vpiSigned() const { return vpiSigned_; }

    bool set_vpiSigned(bool data) { vpiSigned_ = data; return true;}

    int get_vpiSize() const { return vpiSize_; }

    bool set_vpiSize(int data) { vpiSize_ = data; return true;}

    bool get_vpiAutomatic() const { return vpiAutomatic_; }

    bool set_vpiAutomatic(bool data) { vpiAutomatic_ = data; return true;}

    int get_vpiAllocScheme() const { return vpiAllocScheme_; }

    bool set_vpiAllocScheme(int data) { vpiAllocScheme_ = data; return true;}

    bool get_vpiConstantVariable() const { return vpiConstantVariable_; }

    bool set_vpiConstantVariable(bool data) { vpiConstantVariable_ = data; return true;}

    bool get_vpiIsRandomized() const { return vpiIsRandomized_; }

    bool set_vpiIsRandomized(bool data) { vpiIsRandomized_ = data; return true;}

    int get_vpiRandType() const { return vpiRandType_; }

    bool set_vpiRandType(int data) { vpiRandType_ = data; return true;}

    bool get_vpiStructUnionMember() const { return vpiStructUnionMember_; }

    bool set_vpiStructUnionMember(bool data) { vpiStructUnionMember_ = data; return true;}

    bool get_vpiScalar() const { return vpiScalar_; }

    bool set_vpiScalar(bool data) { vpiScalar_ = data; return true;}

    int get_vpiVisibility() const { return vpiVisibility_; }

    bool set_vpiVisibility(int data) { vpiVisibility_ = data; return true;}

    bool get_vpiVector() const { return vpiVector_; }

    bool set_vpiVector(bool data) { vpiVector_ = data; return true;}

    virtual unsigned int getUhdmType() { return uhdmvariables; }   
  private:
    
    bool vpiArrayMember_;

    unsigned int vpiName_;

    unsigned int vpiFullName_;

    bool vpiSigned_;

    int vpiSize_;

    bool vpiAutomatic_;

    int vpiAllocScheme_;

    bool vpiConstantVariable_;

    bool vpiIsRandomized_;

    int vpiRandType_;

    bool vpiStructUnionMember_;

    bool vpiScalar_;

    int vpiVisibility_;

    bool vpiVector_;

  };

  class variablesFactory {
  friend Serializer;
  public:
  static variables* make() {
    variables* obj = new variables();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<variables*> objects_;
  };
 	      
  class VectorOfvariablesFactory {
  friend Serializer;
  public:
  static std::vector<variables*>* make() {
    std::vector<variables*>* obj = new std::vector<variables*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<variables*>*> objects_;
  };

};

#endif
