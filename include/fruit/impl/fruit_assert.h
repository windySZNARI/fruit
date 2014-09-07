/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FRUIT_ASSERT_H
#define FRUIT_ASSERT_H

#ifdef FRUIT_EXTRA_DEBUG
#define FruitStaticAssert(...) static_assert(__VA_ARGS__)
#else
#define FruitStaticAssert(...)
#endif

#define FruitDelegateCheck(...) static_assert(true || sizeof(__VA_ARGS__), "")
#define FruitDelegateChecks(...) static_assert(true || fruit::impl::static_sum<sizeof(__VA_ARGS__)...>::value, "")


#endif // FRUIT_ASSERT_H
