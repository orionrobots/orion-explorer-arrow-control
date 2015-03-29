Vagrant.configure("2") do |config|
  config.vm.box = "hashicorp/precise32"
  config.vm.provision :shell, path: "build-bootstrap.sh", args: "--in-vagrant"
  if Vagrant.has_plugin?("vagrant-cachier")
    config.cache.scope = :box
  end
end
