//---------------------------------------------------------------------------
#pragma once
//---------------------------------------------------------------------------
#include <string>
#include <string_view>
#include <vector>
//---------------------------------------------------------------------------

// debugging
#define DBG_LOGGING


namespace tst
{

  class t_work_obj
  {
  public:

    static int handle(size_t aun_batch_size);

  private:

    static void print_batch(const std::vector<std::string>& avec_buf, std::ofstream& a_write_file);

    static void logout(const std::string_view& astr_view);

    static auto get_tick_count();
  };
  //---------------------------------------------------------------------------
}
