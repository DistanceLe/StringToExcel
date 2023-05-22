tell application "Terminal"
    do script "cd /Users/lijie/Desktop/StableDiffusionWebUI/
./webui.sh"
end tell



spread legs, armpits, blonde hair, magical girl, breast suppress, open clothes, tongue out


xformers

pip install xformers==0.0.17



(novelai) E:\workspace\02_Python\novalai\stable-diffusion-webui>python launch.py -h
Python 3.10.6 | packaged by conda-forge | (main, Oct 24 2022, 16:02:16) [MSC v.1916 64 bit (AMD64)]
Commit hash: b8f2dfed3c0085f1df359b9dc5b3841ddc2196f0
Installing requirements for Web UI
Launching Web UI with arguments: -h
usage: launch.py [-h] [--config CONFIG] [--ckpt CKPT] [--ckpt-dir CKPT_DIR] [--gfpgan-dir GFPGAN_DIR]
                 [--gfpgan-model GFPGAN_MODEL] [--no-half] [--no-half-vae] [--no-progressbar-hiding]
                 [--max-batch-count MAX_BATCH_COUNT] [--embeddings-dir EMBEDDINGS_DIR]
                 [--hypernetwork-dir HYPERNETWORK_DIR] [--localizations-dir LOCALIZATIONS_DIR] [--allow-code]
                 [--medvram] [--lowvram] [--lowram] [--always-batch-cond-uncond] [--unload-gfpgan]
                 [--precision {full,autocast}] [--share] [--ngrok NGROK] [--ngrok-region NGROK_REGION]
                 [--enable-insecure-extension-access] [--codeformer-models-path CODEFORMER_MODELS_PATH]
                 [--gfpgan-models-path GFPGAN_MODELS_PATH] [--esrgan-models-path ESRGAN_MODELS_PATH]
                 [--bsrgan-models-path BSRGAN_MODELS_PATH] [--realesrgan-models-path REALESRGAN_MODELS_PATH]
                 [--scunet-models-path SCUNET_MODELS_PATH] [--swinir-models-path SWINIR_MODELS_PATH]
                 [--ldsr-models-path LDSR_MODELS_PATH] [--clip-models-path CLIP_MODELS_PATH] [--xformers]
                 [--force-enable-xformers] [--deepdanbooru] [--opt-split-attention] [--opt-split-attention-invokeai]
                 [--opt-split-attention-v1] [--disable-opt-split-attention]
                 [--use-cpu {all,sd,interrogate,gfpgan,swinir,esrgan,scunet,codeformer} [{all,sd,interrogate,gfpgan,swinir,esrgan,scunet,codeformer} ...]]
                 [--listen] [--port PORT] [--show-negative-prompt] [--ui-config-file UI_CONFIG_FILE]
                 [--hide-ui-dir-config] [--freeze-settings] [--ui-settings-file UI_SETTINGS_FILE] [--gradio-debug]
                 [--gradio-auth GRADIO_AUTH] [--gradio-img2img-tool {color-sketch,editor}] [--opt-channelslast]
                 [--styles-file STYLES_FILE] [--autolaunch] [--theme THEME] [--use-textbox-seed]
                 [--disable-console-progressbars] [--enable-console-prompts] [--vae-path VAE_PATH]
                 [--disable-safe-unpickle] [--api] [--nowebui] [--ui-debug-mode] [--device-id DEVICE_ID]
                 [--administrator] [--cors-allow-origins CORS_ALLOW_ORIGINS] [--tls-keyfile TLS_KEYFILE]
                 [--tls-certfile TLS_CERTFILE] [--server-name SERVER_NAME]

options:
  -h, --help            show this help message and exit
  --config CONFIG       path to config which constructs model
  --ckpt CKPT           path to checkpoint of stable diffusion model; if specified, this checkpoint will be added to
                        the list of checkpoints and loaded
  --ckpt-dir CKPT_DIR   Path to directory with stable diffusion checkpoints
  --gfpgan-dir GFPGAN_DIR
                        GFPGAN directory
  --gfpgan-model GFPGAN_MODEL
                        GFPGAN model file name
  --no-half             do not switch the model to 16-bit floats
  --no-half-vae         do not switch the VAE model to 16-bit floats
  --no-progressbar-hiding
                        do not hide progressbar in gradio UI (we hide it because it slows down ML if you have hardware
                        acceleration in browser)
  --max-batch-count MAX_BATCH_COUNT
                        maximum batch count value for the UI
  --embeddings-dir EMBEDDINGS_DIR
                        embeddings directory for textual inversion (default: embeddings)
  --hypernetwork-dir HYPERNETWORK_DIR
                        hypernetwork directory
  --localizations-dir LOCALIZATIONS_DIR
                        localizations directory
  --allow-code          allow custom script execution from webui
  --medvram             enable stable diffusion model optimizations for sacrificing a little speed for low VRM usage
  --lowvram             enable stable diffusion model optimizations for sacrificing a lot of speed for very low VRM
                        usage
  --lowram              load stable diffusion checkpoint weights to VRAM instead of RAM
  --always-batch-cond-uncond
                        disables cond/uncond batching that is enabled to save memory with --medvram or --lowvram
  --unload-gfpgan       does not do anything.
  --precision {full,autocast}
                        evaluate at this precision
  --share               use share=True for gradio and make the UI accessible through their site
  --ngrok NGROK         ngrok authtoken, alternative to gradio --share
  --ngrok-region NGROK_REGION
                        The region in which ngrok should start.
  --enable-insecure-extension-access
                        enable extensions tab regardless of other options
  --codeformer-models-path CODEFORMER_MODELS_PATH
                        Path to directory with codeformer model file(s).
  --gfpgan-models-path GFPGAN_MODELS_PATH
                        Path to directory with GFPGAN model file(s).
  --esrgan-models-path ESRGAN_MODELS_PATH
                        Path to directory with ESRGAN model file(s).
  --bsrgan-models-path BSRGAN_MODELS_PATH
                        Path to directory with BSRGAN model file(s).
  --realesrgan-models-path REALESRGAN_MODELS_PATH
                        Path to directory with RealESRGAN model file(s).
  --scunet-models-path SCUNET_MODELS_PATH
                        Path to directory with ScuNET model file(s).
  --swinir-models-path SWINIR_MODELS_PATH
                        Path to directory with SwinIR model file(s).
  --ldsr-models-path LDSR_MODELS_PATH
                        Path to directory with LDSR model file(s).
  --clip-models-path CLIP_MODELS_PATH
                        Path to directory with CLIP model file(s).
  --xformers            enable xformers for cross attention layers
  --force-enable-xformers
                        enable xformers for cross attention layers regardless of whether the checking code thinks you
                        can run it; do not make bug reports if this fails to work
  --deepdanbooru        enable deepdanbooru interrogator
  --opt-split-attention
                        force-enables Doggettx's cross-attention layer optimization. By default, it's on for torch
                        cuda.
  --opt-split-attention-invokeai
                        force-enables InvokeAI's cross-attention layer optimization. By default, it's on when cuda is
                        unavailable.
  --opt-split-attention-v1
                        enable older version of split attention optimization that does not consume all the VRAM it can
                        find
  --disable-opt-split-attention
                        force-disables cross-attention layer optimization
  --use-cpu {all,sd,interrogate,gfpgan,swinir,esrgan,scunet,codeformer} [{all,sd,interrogate,gfpgan,swinir,esrgan,scunet,codeformer} ...]
                        use CPU as torch device for specified modules
  --listen              launch gradio with 0.0.0.0 as server name, allowing to respond to network requests
  --port PORT           launch gradio with given server port, you need root/admin rights for ports < 1024, defaults to
                        7860 if available
  --show-negative-prompt
                        does not do anything
  --ui-config-file UI_CONFIG_FILE
                        filename to use for ui configuration
  --hide-ui-dir-config  hide directory configuration from webui
  --freeze-settings     disable editing settings
  --ui-settings-file UI_SETTINGS_FILE
                        filename to use for ui settings
  --gradio-debug        launch gradio with --debug option
  --gradio-auth GRADIO_AUTH
                        set gradio authentication like "username:password"; or comma-delimit multiple like
                        "u1:p1,u2:p2,u3:p3"
  --gradio-img2img-tool {color-sketch,editor}
                        gradio image uploader tool: can be either editor for ctopping, or color-sketch for drawing
  --opt-channelslast    change memory type for stable diffusion to channels last
  --styles-file STYLES_FILE
                        filename to use for styles
  --autolaunch          open the webui URL in the system's default browser upon launch
  --theme THEME         launches the UI with light or dark theme
  --use-textbox-seed    use textbox for seeds in UI (no up/down, but possible to input long seeds)
  --disable-console-progressbars
                        do not output progressbars to console
  --enable-console-prompts
                        print prompts to console when generating with txt2img and img2img
  --vae-path VAE_PATH   Path to Variational Autoencoders model
  --disable-safe-unpickle
                        disable checking pytorch models for malicious code
  --api                 use api=True to launch the api with the webui
  --nowebui             use api=True to launch the api instead of the webui
  --ui-debug-mode       Don't load model to quickly launch UI
  --device-id DEVICE_ID
                        Select the default CUDA device to use (export CUDA_VISIBLE_DEVICES=0,1,etc might be needed
                        before)
  --administrator       Administrator rights
  --cors-allow-origins CORS_ALLOW_ORIGINS
                        Allowed CORS origins
  --tls-keyfile TLS_KEYFILE
                        Partially enables TLS, requires --tls-certfile to fully function
  --tls-certfile TLS_CERTFILE
                        Partially enables TLS, requires --tls-keyfile to fully function
  --server-name SERVER_NAME
                        Sets hostname of server







pip3 install --pre torch torchvision torchaudio --index-url https://download.pytorch.org/whl/nightly/cpu

pip3 install gfpgan

pip install ftfy regex tqdm
pip install git+https://github.com/openai/CLIP.git


--skip-torch-cuda-test --upcast-sampling --no-half-vae --use-cpu interrogate



brew install xz
pyenv uninstall 3.11.3
pyenv install 3.11.3

3.11.3



Stable Diffusion WebUI

激活Python 环境
source venv/bin/activate

lijie@lijiedeMac-mini-2  ~  cd /Users/lijie/Desktop/StableDiffusionWebUI
lijie@lijiedeMac-mini-2  ~/Desktop/StableDiffusionWebUI   master ±  source venv/bin/activate
(venv)  lijie@lijiedeMac-mini-2  ~/Desktop/StableDiffusionWebUI   master ±  pip install -U xformers


扩展列表网址：
https://gitee.com/akegarasu/sd-webui-extensions/raw/master/index.md

https://github.com/dtlnor/stable-diffusion-webui-localization-zh_CN
https://github.com/butaixianran/Stable-Diffusion-Webui-Civitai-Helper
https://civitai.com/models/8217?modelVersionId=12998


Expecting value: line 1 column 1
在stable-diffusion-webui目录下找到webui-macos-env.sh，在export COMMANDLINE_ARGS后添加–no-gradio-queue即可


启用深色主题
在URL后添加：?__theme=dark
http://127.0.0.1:7860/?__theme=dark


我们就来逐个解释下每个参数的含义：

--skip-torch-cuda-test：这个参数在运行PyTorch库时跳过CUDA兼容性检查。如果你没有兼容的CUDA设备或想加快启动时间，这可能很有用。
--upcast-sampling：这个参数启用了一种称为“upcasting”的采样技术。Upcasting可以用来减少随机梯度下降中梯度估计的方差，这有助于提高收敛性和训练稳定性。
--no-half-vae：这个参数禁用了使用16位精度的VAE（变分自动编码器）模型。VAE模型用于无监督学习和特征提取，使用16位精度可以提高训练速度和内存使用。
--use-cpu：这个参数强制使用CPU而不是GPU进行计算。如果没有兼容的GPU或想节省电力，这可能很有用。
interrogate：这可能是一个位置参数，指定正在使用上述命令行参数启动的程序或脚本的名称或路径。




export COMMANDLINE_ARGS="--skip-torch-cuda-test --upcast-sampling --no-half-vae --use-cpu interrogate --no-gradio-queue"
export COMMANDLINE_ARGS="--xformers --skip-torch-cuda-test --no-half --use-cpu all"




https://github.com/DistanceLe/GFPGAN

https://github.com/mlfoundations/open_clip

自己去下载下来 Scripts 文件没有可以新建
然后 解压到 StableDiffusionWebUI/venv/Scripts/GFPGAN

然后 在venv环境下 安装gfpgan
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip install gfpgan


pip install basicsr

pip install facexlib

pip install -r requirements.txt

python3 setup.py develop

pip install realesrgan

如果没有pip命令则换成pip3




python -m pip install -r requirements_versions.txt
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 install -r requirements_versions.txt
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 install requirements
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 install CodeFormer
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip install open_clip
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 install xformers

/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip install ftfy regex tqdm
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip install git+https://github.com/openai/CLIP.git



/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip install pyre-extensions==0.0.29

/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 uninstall torch
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 install torch torchvision torchaudio
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 install --pre torch torchvision torchaudio --index-url https://download.pytorch.org/whl/nightly/cpu
pip3 install torch torchvision torchaudio


--skip-torch-cuda-test


ModuleNotFoundError: No module named '_lzma'
brew install xz
$  pyenv uninstall <desired-python-version>
$  pyenv install <desired-python-version>



No module 'xformers'. Proceeding without it.
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 install xformers

cd venv/Scripts
./activate
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip3 install --pre torch torchvision torchaudio --index-url https://download.pytorch.org/whl/nightly/cu118
( was pip install --force-reinstall torch torchvision --index-url [https://download.pytorch.org/whl/cu118] )
/Users/lijie/Desktop/StableDiffusionWebUI/venv/bin/pip install --force-reinstall --no-deps --pre xformers
                                                                  
                                               
I fixed it by editing the launch.py

commandline_args = os.environ.get('COMMANDLINE_ARGS', "--xformers")

WebUI does not look for xformers otherwise. It also seems to have installed its own version inside its own venv.
                                                                  
Warning: caught exception 'Torch not compiled with CUDA enabled', memory monitor disabled
                                                                  
                                                                  


