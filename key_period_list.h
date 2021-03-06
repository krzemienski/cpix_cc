// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//  https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CPIX_CC_KEY_PERIOD_LIST_H_
#define CPIX_CC_KEY_PERIOD_LIST_H_

#include <memory>

#include "cpix_element.h"
#include "cpix_element_list.h"
#include "key_period.h"

namespace cpix {
class KeyPeriodList : public CPIXElementList {
 public:
  KeyPeriodList() : CPIXElementList("ContentKeyPeriodList") {}
  ~KeyPeriodList();
  bool AddKeyPeriod(std::unique_ptr<KeyPeriod> key_period);

 private:
  friend class CPIXMessage;
  std::unique_ptr<CPIXElement> CreateElement();
};
}  // namespace cpix

#endif  // CPIX_CC_KEY_PERIOD_LIST_H_
