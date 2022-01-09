#pragma once
#include "InfrastProductionTask.h"

namespace asst
{
    class InfrastPowerTask final : public InfrastProductionTask
    {
    public:
        using InfrastProductionTask::InfrastProductionTask;
        virtual ~InfrastPowerTask() = default;

        virtual size_t max_num_of_facility() const noexcept override { return 3ULL; }

    protected:
        virtual bool _run() override;
    };
}
