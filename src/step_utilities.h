#pragma once

#include "grib_api_internal.h"
#include "step.h"
#include <optional>

std::optional<Step> get_step(grib_handle* h, const std::string& value_key, const std::string& unit_key);
bool is_future_output_enabled(grib_handle* h);

