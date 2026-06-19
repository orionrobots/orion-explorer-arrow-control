Vagrant.configure("2") do |config|
  config.vm.box = "hashicorp/precise32"
  config.vm.provision :shell, path: "build-bootstrap.sh", args: "--in-vagrant"
  config.vm.provision :shell, path: "non-root-bootstrap.sh", privileged: false
  if Vagrant.has_plugin?("vagrant-cachier")
    config.cache.scope = :box
  end
end
