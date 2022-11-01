#pragma once

#include <cstdio>
#include <string>
#include <utility>
#include <vector>
#include "IRuntimeModule.hpp"
#include "Buffer.hpp"

namespace ZetaEngine
{
    class AssetLoader : public IRuntimeModule
    {
    public:
        virtual ~AssetLoader() override = default;

        virtual int Initialize() override;
        virtual void Finalize() override;

        virtual void Tick() override;

        using AssetFilePtr = void*;

        enum AssetOpenMode
        {
            MY_OPEN_TEXT = 0,   // Open In Text Mode
            My_OPEN_BINARY = 1, // Open In Binary Mode
        };

        enum AssetSeekBase
        {
            MY_SEEK_SET = 0, // SEEK_SET
            MY_SEEK_CUR = 1, // SEEK_CUR
            MY_SEEK_END = 2, // SEEK_END
        };

        bool AddSearchPath(const char *path);

        bool RemoveSearchPath(const char *path);

        bool FileExists(const char *filePath);

        AssetFilePtr OpenFile(const char* name, AssetOpenMode mode);
        
        Buffer SyncOpenAndReadText(const char* filePath);

        size_t SyncRead(const AssetFilePtr& fp, Buffer& buf);

        void CloseFile(AssetFilePtr& fp);

        size_t GetSize(const AssetFilePtr& fp);

        int32_t Seek(AssetFilePtr fp, long offset, AssetSeekBase where);

        inline std::string SyncOpenAndReadTextFileToString(const char* filename)
        {
            std::string result;
            Buffer buffer = SyncOpenAndReadText(filename);
            char* content = reinterpret_cast<char*>(buffer.m_pData);

            if (content)
            {
                result = std::string(std::move(content));
            }

            return result;
        }
    private:
        std::vector<std::string> m_strSearchPath;
    };
}