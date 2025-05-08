#ifndef ROM_H_
#define ROM_H_

#include <fstream>
#include <string_view>
class Rom {
  public:
    static constexpr int kMaxRomFileSize = 0xDFF;

    ~Rom() {
        if (stream) {
            stream.close();
        }
    }

    void with_file_or_throw(std::string_view filename) {
        std::ifstream s{filename.data(), std::ios_base::in | std::ios_base::out}

        stream.fopen(filename.data(), std::ios_base::in | std::ios_base::out);

        if (!stream)
            throw std::runtime_error("OOOOPS");

        stream_size = stream.tellg();
        stream.seekg(0);

        if (stream_size == 0 || stream_size > kMaxRomFileSize)
            throw std::runtime_error("FILE TOO BIG");
    }
    std::string Data(){
        std::ostringstream ss;
        ss << stream.rdbuf();
        return ss.str();
    }

  private:
    std::ifstream stream;
    long stream_size = 0;
}

#endif // ROM_H_
