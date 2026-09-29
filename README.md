# 🖨️ 42_ft_Printf

A custom implementation of the standard C library `printf` function, developed for the 42 School curriculum (noted as a project reupload). This project explores variadic arguments in C and recreates the core functionality of formatting and printing data to the standard output.

## 📁 Project Structure

The repository is built primarily in C (87.2%) and utilizes a Makefile (12.8%) for compilation. It contains the following modular source files used to build the custom `ft_printf` function:

* `ft_printf.c` - The core logic and variadic argument parsing for the `ft_printf` function.
* `ft_printchar.c` - Helper functions dedicated to printing single characters and strings.
* `ft_printnbr.c` - Helper functions for formatting and printing numbers.
* `ft_printfpointer.c` - Helper functions for formatting and printing memory addresses and pointers.
* `ft_putchar.c` - A basic utility to output a single character to standard output.
* `ft_printf.h` - The header file containing function prototypes and necessary macros or includes.
* `Makefile` - The build script used to compile the source files[cite: 4].
* `main.c` - A test file included to run and verify the functionality of your custom `ft_printf`.

## 🚀 Getting Started

### Prerequisites
* GCC compiler
* Make

### Installation & Compilation

1. Clone the repository:
   ```bash
   git clone [https://github.com/Arkarchanmyae123/42_ft_Printf.git](https://github.com/Arkarchanmyae123/42_ft_Printf.git)
   cd 42_ft_Printf

# Burmese 

# 🖨️ 42_ft_Printf

42 School သင်ရိုးညွှန်းတမ်းအတွက် ရေးသားထားတဲ့ Standard C library `printf` function ရဲ့ ကိုယ်ပိုင်ဖန်တီးမှု (Project အဟောင်းကို ပြန်လည်တင်ထားခြင်း) ဖြစ်ပါတယ်။ ဒီပရောဂျက်မှာ C ရဲ့ variadic arguments တွေကို လေ့လာအသုံးပြုထားပြီး၊ ဒေတာတွေကို Format ချခြင်းနဲ့ Standard output အဖြစ် ထုတ်ပေးခြင်းစတဲ့ အဓိက လုပ်ဆောင်ချက်တွေကို ပြန်လည်တည်ဆောက်ထားပါတယ်။

## 📁 ပရောဂျက် ဖွဲ့စည်းပုံ

ဒီ Repository ကို အဓိကအားဖြင့် C language (87.2%) နဲ့ ရေးသားထားပြီး Compile လုပ်ဖို့အတွက် Makefile (12.8%) ကို အသုံးပြုထားပါတယ်။ ကိုယ်ပိုင် `ft_printf` function ကို တည်ဆောက်ဖို့ အောက်ပါ Modular source code ဖိုင်တွေ ပါဝင်ပါတယ်-

* `ft_printf.c` - `ft_printf` function အတွက် အဓိက Logic နဲ့ Variadic argument တွေကို ခွဲခြမ်းစိတ်ဖြာပေးတဲ့ ဖိုင် ဖြစ်ပါတယ်။
* `ft_printchar.c` - Character တစ်လုံးချင်းစီနဲ့ String တွေကို Print ထုတ်ဖို့ သီးသန့်ရေးသားထားတဲ့ Helper function တွေ ဖြစ်ပါတယ်။
* `ft_printnbr.c` - ဂဏန်း (Numbers) တွေကို Format ချပြီး Print ထုတ်ဖို့အတွက် Helper function တွေ ဖြစ်ပါတယ်။
* `ft_printfpointer.c` - Memory addresses တွေနဲ့ Pointers တွေကို Format ချပြီး Print ထုတ်ဖို့ Helper function တွေ ဖြစ်ပါတယ်။
* `ft_putchar.c` - Standard output ကို Character တစ်လုံးချင်းစီ ထုတ်ပေးတဲ့ အခြေခံ Utility ဖိုင် ဖြစ်ပါတယ်။
* `ft_printf.h` - Function prototypes တွေနဲ့ လိုအပ်တဲ့ Macros/Includes တွေ ပါဝင်တဲ့ Header ဖိုင် ဖြစ်ပါတယ်။
* `Makefile` - Source code ဖိုင်တွေကို Compile လုပ်ဖို့အတွက် အသုံးပြုတဲ့ Build script ဖြစ်ပါတယ်။
* `main.c` - သင်ဖန်တီးထားတဲ့ `ft_printf` ကောင်းကောင်း အလုပ်လုပ်ခြင်း ရှိ/မရှိ စမ်းသပ် (Test) ဖို့ ထည့်သွင်းထားတဲ့ ဖိုင် ဖြစ်ပါတယ်။

## 🚀 စတင်အသုံးပြုခြင်း

### လိုအပ်ချက်များ (Prerequisites)
* GCC compiler
* Make

### ထည့်သွင်းခြင်းနှင့် Compile လုပ်ခြင်း (Installation & Compilation)

၁။ Repository ကို Clone လုပ်ရန်-
   ```bash
   git clone [https://github.com/Arkarchanmyae123/42_ft_Printf.git](https://github.com/Arkarchanmyae123/42_ft_Printf.git)
   cd 42_ft_Printf
