//
// Created by Иван Морозов on 11.11.2018.
//

#ifndef PRE_WORK_SESSION_BY_NAME_H
#define PRE_WORK_SESSION_BY_NAME_H

#include "../session_builder/session_builder.h"
#include "../sys/sys.h"

class SessionByName : public SessionBuilder {
 public:
  SessionByName();
  void set_user(std::string token) override;
  void set_connection() override;
};

#endif //PRE_WORK_SESSION_BY_NAME_H
